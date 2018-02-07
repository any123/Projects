# System-wide .bashrc file for interactive bash(1) shells.

# To enable the settings / commands in this file for login shells as well,
# this file has to be sourced in /etc/profile.

# If not running interactively, don't do anything
[ -z "$PS1" ] && return

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "${debian_chroot:-}" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, overwrite the one in /etc/profile)
PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '

# Commented out, don't overwrite xterm -T "title" -n "icontitle" by default.
# If this is an xterm set the title to user@host:dir
#case "$TERM" in
#xterm*|rxvt*)
#    PROMPT_COMMAND='echo -ne "\033]0;${USER}@${HOSTNAME}: ${PWD}\007"'
#    ;;
#*)
#    ;;
#esac

# enable bash completion in interactive shells
#if ! shopt -oq posix; then
#  if [ -f /usr/share/bash-completion/bash_completion ]; then
#    . /usr/share/bash-completion/bash_completion
#  elif [ -f /etc/bash_completion ]; then
#    . /etc/bash_completion
#  fi
#fi

# sudo hint
if [ ! -e "$HOME/.sudo_as_admin_successful" ] && [ ! -e "$HOME/.hushlogin" ] ; then
    case " $(groups) " in *\ admin\ *|*\ sudo\ *)
    if [ -x /usr/bin/sudo ]; then
	cat <<-EOF
	To run a command as administrator (user "root"), use "sudo <command>".
	See "man sudo_root" for details.
	
	EOF
    fi
    esac
fi

# if the command-not-found package is installed, use it
if [ -x /usr/lib/command-not-found -o -x /usr/share/command-not-found/command-not-found ]; then
	function command_not_found_handle {
	        # check because c-n-f could've been removed in the meantime
                if [ -x /usr/lib/command-not-found ]; then
		   /usr/lib/command-not-found -- "$1"
                   return $?
                elif [ -x /usr/share/command-not-found/command-not-found ]; then
		   /usr/share/command-not-found/command-not-found -- "$1"
                   return $?
		else
		   printf "%s: command not found\n" "$1" >&2
		   return 127
		fi
	}
fi



alias update='sudo apt-get update'
alias upgrade='sudo apt-get upgrade'
alias remove='sudo apt-get autoremove'
alias clean='sudo apt-get clean'
alias ins='sudo apt-get install'

alias diskspace="du -S | sort -n -r |more"

# Show me the size (sorted) of only the folders in this directory
alias folders="sudo find . -maxdepth 1 -type d -print | xargs du -sk | sort -rn"

# This will keep you sane when you're about to smash the keyboard again.
alias frak="fortune"



export LESS_TERMCAP_mb=$'\E[01;31m'
export LESS_TERMCAP_md=$'\E[01;31m'
export LESS_TERMCAP_me=$'\E[0m'
export LESS_TERMCAP_se=$'\E[0m'
export LESS_TERMCAP_so=$'\E[01;44;33m'
export LESS_TERMCAP_ue=$'\E[0m'
export LESS_TERMCAP_us=$'\E[01;32m'






	
#No more cd ../../../.. but up 4

#Goes up many dirs as the number passed as argument, if none goes up by 1 by default (found in a link in a comment in stackoverflow.com and modified a bit)

up(){
  local d=""
  limit=$1
  for ((i=1 ; i <= limit ; i++))
    do
      d=$d/..
    done
  d=$(echo $d | sed 's/^\///')
  if [ -z "$d" ]; then
    d=..
  fi
  cd $d
}

alias play="sudo find -name "*.mp3" | sort --random-sort| head -n 100|xargs -d '\n' mpg123"

alias orphan="sudo deborphan | xargs sudo apt-get -y remove --purge"

alias e='exit'

alias o="sudo gedit /etc/bash.bashrc"

alias finds="grep -rnw" 

alias re='reboot'

alias shut="sudo init 0"

alias sus='systemctl suspend'

alias log='gnome-session-quit'

alias pro='xdg-open "/media/ankit/New Volume/Programming"'

alias ankit='xdg-open "/media/ankit/New Volume/ANKIT"'

alias sea='xdg-open "/media/ankit/New Volume/Seasons"'

alias c='clear'


alias t1='sudo rm /var/lib/apt/lists/lock'

alias t2='sudo rm /var/cache/apt/archives/lock'

alias t3='sudo rm /var/lib/dpkg/lock'

alias list='apt-mark showmanual'

alias unins='sudo apt-get remove --purge'

alias he='sudo gedit "/media/ankit/New Volume/ANKIT/My_Curent_Status/HEMANT.txt"'

alias u='sudo apt update && sudo apt dist-upgrade'

alias songs='find "/media/ankit/New Volume/video songs" -type f -exec vlc -LZ '{}' +'

alias porn='sudo who && find "/media/ankit/Fun Stuff/Permanent Roommates/TVF/T" -type f -exec vlc -LZ '{}' +'

alias friends='find "/media/ankit/New Volume/Seasons/F.R.I.E.N.D.S" -type f -exec vlc -LZ '{}' +'

alias eng='find "/media/ankit/Fun Stuff/ENGLISH" -type f -exec vlc -LZ '{}' +'

alias theek_new='sudo mount -o remount,rw  "/dev/sda3"'

alias theek_fun='sudo mount -o remount,rw  "/dev/sda5"'

alias os_update='update && printf "\n\tchalo THIS WORK IS DONE!!!! Now lets check for new OS\n\n" && sudo do-release-upgrade'

alias help_me='printf "Here are the terms u can use\n\tCleaning:\tremove or clean or orphan\n\tTo update:\tupdate upgrade u\n\tLocked Drive: Phele windows theek se band kr or use theek_new or theek_fun\n\tUninstall\tunis\n\tTo update the OS:\tos_update\n\tProgramming:\tpro\n\tRemove locks:\tt1 t2 t3\n\tFun:\tplay or songs or eng\n\tLog out:\t log" && printf "\n\tchalo THIS WORK IS DONE!!!!\n\n"'

alias op='printf "\tUse sudo rm /etc/bash.bashrc\n\t  \n\tafter editing open Your file from /media/ankit/New Volume/ANKIT/Txt\n\t
\n\tdo as: sudo cp /media/ankit/New Volume/ANKIT/Txt/bash.bashrc /etc/\n\n"'


