cmd_fs/quota/modules.order := {   echo fs/quota/quota_v1.ko;   echo fs/quota/quota_v2.ko;   echo fs/quota/quota_tree.ko; :; } | awk '!x[$$0]++' - > fs/quota/modules.order
