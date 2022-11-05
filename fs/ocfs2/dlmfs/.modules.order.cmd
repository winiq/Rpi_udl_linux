cmd_fs/ocfs2/dlmfs/modules.order := {   echo fs/ocfs2/dlmfs/ocfs2_dlmfs.ko; :; } | awk '!x[$$0]++' - > fs/ocfs2/dlmfs/modules.order
