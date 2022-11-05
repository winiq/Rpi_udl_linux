cmd_fs/jffs2/modules.order := {   echo fs/jffs2/jffs2.ko; :; } | awk '!x[$$0]++' - > fs/jffs2/modules.order
