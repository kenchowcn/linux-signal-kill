Only kill -9 will works, other signals have been caught up.

<pre>
kenchow@ken-U64:~/Documents/git-test$ ./signal &
[1] 3942
kenchow@ken-U64:~/Documents/git-test$ kill -1 3942   
Catch signal = 1
kenchow@ken-U64:~/Documents/git-test$ kill -2 3942 
Catch signal = 2
kenchow@ken-U64:~/Documents/git-test$ 
kenchow@ken-U64:~/Documents/git-test$ kill -3 3942 
Catch signal = 3
kenchow@ken-U64:~/Documents/git-test$ kill -4 3942 
Catch signal = 4
kenchow@ken-U64:~/Documents/git-test$ kill -5 3942 
Catch signal = 5
kenchow@ken-U64:~/Documents/git-test$ kill -6 3942 
Catch signal = 6
kenchow@ken-U64:~/Documents/git-test$ 
kenchow@ken-U64:~/Documents/git-test$ kill -1 3942
Catch signal = 1
kenchow@ken-U64:~/Documents/git-test$ kill -2 3942
Catch signal = 2
kenchow@ken-U64:~/Documents/git-test$ kill -3 3942
Catch signal = 3
kenchow@ken-U64:~/Documents/git-test$ kill -4 3942
Catch signal = 4
kenchow@ken-U64:~/Documents/git-test$ kill -5 3942
Catch signal = 5
kenchow@ken-U64:~/Documents/git-test$ kill -6 3942
Catch signal = 6
kenchow@ken-U64:~/Documents/git-test$ kill -7 3942 
Catch signal = 7
kenchow@ken-U64:~/Documents/git-test$ kill -8 3942 
Catch signal = 8
kenchow@ken-U64:~/Documents/git-test$ kill -9 3942 
[1]+  Killed                  ./signal
kenchow@ken-U64:~/Documents/git-test$ ./signal &            
[1] 4018
kenchow@ken-U64:~/Documents/git-test$ kill -10 4018
Catch signal = 10
kenchow@ken-U64:~/Documents/git-test$ kill -11 4018 
Catch signal = 11
kenchow@ken-U64:~/Documents/git-test$ kill -12 4018 
Catch signal = 12
kenchow@ken-U64:~/Documents/git-test$ kill -13 4018 
Catch signal = 13
kenchow@ken-U64:~/Documents/git-test$ kill -14 4018 
Catch signal = 14
kenchow@ken-U64:~/Documents/git-test$ kill -99 4018  
-bash: kill: 99: invalid signal specification
kenchow@ken-U64:~/Documents/git-test$ kill -100 4018  
-bash: kill: 100: invalid signal specification
kenchow@ken-U64:~/Documents/git-test$ kill -15 4018  
Catch signal = 15
</pre>