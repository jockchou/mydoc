# sqlplus常用命令 #

----------

## oracle用户 ##
- sys/change_on_install as sysdba
- system/manager as sysoper
- scott/tiger

sys有创建database的权限，system没有。一般讲，对数据库维护，使用system用户登录就可以拉。

## sqlplus常用命令 ##

## 连接命令 ##

```
conn system/manager@oracledb as sysdba

SQL> show user			  --显示当前用户
USER 为 "SYS"

SQL> passw                --修改密码
更改 SCOTT 的口令
旧口令:
新口令:
重新键入新口令:
口令已更改
SQL>

clear sreen  --清屏
exit 		 --退出sqlplus
```
## 显示和设置环境变量 ##
```
show linesize
show pagesize

set linesize 300
set pagesize 14


```
## 文件操作 ##
```
1.start和@
说明: 运行sql脚本
案例: sql>@ d:\a.sql或是sql>start d:\a.sql

2.edit
说明: 该命令可以编辑指定的sql脚本
案例: sql>edit d:\a.sql,这样会把d:\a.sql 这个文件打开

3.spool
说明: 该命令可以将sql*plus屏幕上的内容输出到指定文件中去。
案例: sql>spool d:\b.sql并输入sql>spool off
eg、
sql>spool d:\b.sql;
sql>select * from emp;
sql>spool off;
```

## 交互式命令 ##

1.&
说明：可以替代变量，而该变量在执行时，需要用户输入。
select * from emp where job='&job'；

##host命令##

```
SQL> host dir d:\
 驱动器 D 中的卷没有标签。
 卷的序列号是 929C-6E1F

 d:\ 的目录

2015/12/28  18:07             5,500 a.log
2015/12/28  11:19    <DIR>          gitroot
2015/12/24  16:31    <DIR>          note
2015/12/11  18:48    <DIR>          stormspace
2015/12/11  19:23    <DIR>          svnroot
2015/12/15  10:31    <DIR>          wnmp
2015/12/11  18:35    <DIR>          workspace
               1 个文件          5,500 字节
               6 个目录 321,774,206,976 可用字节
```