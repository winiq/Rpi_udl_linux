cmd_fs/ocfs2/cluster/modules.order := {   echo fs/ocfs2/cluster/ocfs2_nodemanager.ko; :; } | awk '!x[$$0]++' - > fs/ocfs2/cluster/modules.order
