kill函数就将信号发送给进程或进程组。raise函数择允许进程向自身发送信号。
int kill(pid_t pid, int signo);
int raise(int signo) 
