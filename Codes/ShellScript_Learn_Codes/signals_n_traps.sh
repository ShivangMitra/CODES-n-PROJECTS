# echo "pid is $$"
# while (( COUNT < 10 ))
# do
#     sleep 3
#     (( COUNT++ ))
#     echo $COUNT
# done
# exit 0

# kill -9 pid  ||| -9 is for SIGKILL signal
# ctrl + c     ||| SIGINT
# ctrl + z     ||| SIGTSTP
# man 7 signal


# trap "echo Exit command is detected" 0     #exit 0 is a success signal
# echo "Hello world"
# exit 0


# trap "echo Exit signal detected" SIGINT
# trap "echo Exit signal detected" 2

# echo "pid is $$"
# while (( COUNT < 10 ))
# do
#     sleep 3
#     (( COUNT++ ))
#     echo $COUNT
# done
# exit 0

# TRAP HAS SOME EXCEPTIONS THAT IT CANNOT CATCH - SIGKILL AND SIGSTOP

file=/mnt/c/code_n_projects/codes/shellscript_learn_codes/del.txt
trap "rm -f $file && echo file deleted; exit" 0 2 15

echo "pid is $$"
while (( COUNT < 10 ))
do
    sleep 3
    (( COUNT++ ))
    echo $COUNT
done
exit 0

# kill -15 pid
# trap - name_of_the_signal  ||| write this in terminal to remove the specfic traps from the trap list
# trap - 0 2 15

# set -x  ||| activate debugging
# set +x  ||| deactivate debugging