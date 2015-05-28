# 加密技术与互联网安全 #

----------
## 互联网为什么不安全？ ##

窃听（机密性）
篡改（完整性）
伪装（身份认证）
否认（不可否认性）

密码技术就是用来解决这3个问题的。

## 密钥 ##

加密解密时需要的一串字符，它就像一串钥匙，消息发送者使用它把明文变成密文，消息接收者使用它把密文变成明文。

（图片展示密钥）

## 对称密码与非对称密码 ##

对称密码：加密解密使用同一密钥
非对称密码：加密解密使用不同密钥

（图片展示）

## 单向散列函数 ##
保证完整性，md5
## 消息认证码 ##
保证完整性，提供认证

## 数字签名 ##
保证完整性，提供认证，防止否认的密码技术
将现实世界的签名，盖章移植到数字世界

伪随机数生成器在密码技术中的重要性


对称密码
DES算法详解
AES算法详解


非对称密码

公钥认证问题
处理速度问题

RAS算法详解


混合密码系统
用对称提速，用公钥密码保护会话密钥



单向散列函数
MD5 SHA-1
用途
无法解决的问题


消息认证码(MAC)
确认完整性，并进行认证

数字签名
消息到底是谁写的

证书
为公钥加上数字签名

SSL和TLS




