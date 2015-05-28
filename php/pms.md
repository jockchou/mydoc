#Pingo Message System Manual

#Pingo消息系统手册

----------------------------
Pingo消息系统（Pingo Message System）简称pms。系统工作方式描述：后端服务通过接口向系统发布一个消息，客户端通过接口拉取发给自己的消息。

##消息(Message)固定属性

> 1. mId    -> 消息的Id，长整型，消息的唯一标识
> 2. mTag   -> 消息的标签，字符串类型，由用户指定，用于标识一类消息
> 2. mBody  -> 消息的主体，字符串类型，由使用自己定义
> 3. mTime  -> 消息的生成时间，长整型，Unix时间，由系统生成
> 4. mCode  -> 消息的安全校验码


1. Message的JSON表示形式如下：
```
{
    "mId": "1",
    "mTag": "chat",
    "mBody": "hello",
    "mTime": "1425030307786",
    "mCode": "034eef2cfacc2"
}
```
2. mCode的计算公式
mCode = substr(md5(mId + mTag + mBody + mTime + appKey), 0, 13)
其中appKey为系统分配给调用者的一个私钥，消息的接受收利用以上公式计算消息的mCode，与之对比验证消息不否被篡改。

###消息系统API
1. 发布消息
	- -publishMessage(string mBody, string mTag="0", long expire=0)
	- -publishMessageBatch(string[] mBodyArray, string mTag="0", long expire=0)
2. 获取消息
	- +getMessageById(long mId)
	- +getMessageByIdArray(long[] mIdArray)
	- +getMessageByIdRange(long lMid, long rMid=0)
	- +getMessageByTimeRange(long lTime, long rTime)
	- +getMessageByTag(string mTag, int num=0)
3. 删除消息
	- -removeMessageAll()
	- -removeMessageByTag(string mTag, int num=0)
	- -removeMessageById(long mId)
	- -removeMessageByIdArray(long[] mIdArray)
	- -removeMessageByIdRange(long lMid, long rMid)
	- -removeMessageByTimeRange(long lTime, long rTime)
4. 修改消息
	- -updateMessageById(long mId, string mBody)
5. 合并消息
	- -mergerMessage(long targetId, long[] mIdArray)

###使用案例

####1. 运营通知(红点)
对于运营类型的消息，它针对所有用户，在服务端只需要发布一条，设置mTag的值：
- mTag = "operation:all"  		->表示所有用户能拉到
- mTag = "operation:android" 	->表示只有安卓用户能看到
- mTag = "operation:ios" 		->表示只有ios用户能看到
- mTag = "operation:man"		->表示只有男人可以看到
- mTag = "operation:woman"		->表示只有女人可以看到


客户端拉取的时候，可以这样调用getMessageByTag("operation:*")，

####2. 聊天消息

对于聊天类型的消息，它针对单个用户，设置mTag的值可以这样:
- mTag = "userId:12233"		  ->表示这条消息只能userId为12233的用户接收
- mTag = "groupId:1234"		  ->表示这条消息只能在群1234中的用户接收

客户端拉取的时候，可以这样调用getMessageByTag("userId:12233")，表示拉取自己所有的消息。


