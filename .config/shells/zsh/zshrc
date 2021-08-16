export SHELLDIR="$XDG_CONFIG_HOME/shells"
export ZSH="$SHELLDIR/zsh"
autoload -U +X compinit
compinit -d $XDG_CACHE_HOME/zcompdump-artix-5.8
fpath=($ZSH/plugins/zsh-completions/src $fpath)
source $SHELLDIR/aliasrc
source $SHELLDIR/colorsrc # contians color substituions
source $SHELLDIR/cpwdrc # contains _collapsed_pwd
bindkey -v
HISTFILE="$XDG_CACHE_HOME/zshHIST"
SAVEHIST=100
HISTSIZE=5000
setopt prompt_subst
autoload -U colors && colors
#PROMPT='%{$fg_bold[green]%}%n%{$reset_color%}@%m\
#:[%{$fg_bold[green]%}$(_collapsed_pwd)%{$reset_color%}]:$ '
PROMPT='%{$fg_bold[green]%}λ%{$reset_color%}:[%{$fg_bold[green]%}%c%{$reset_color%}]:$ '
source $ZSH/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
source $ZSH/plugins/fzf-tab/fzf-tab.zsh
theme
