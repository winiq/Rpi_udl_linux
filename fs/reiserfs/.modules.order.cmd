cmd_fs/reiserfs/modules.order := {   echo fs/reiserfs/reiserfs.ko; :; } | awk '!x[$$0]++' - > fs/reiserfs/modules.order
