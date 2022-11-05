cmd_fs/dlm/modules.order := {   echo fs/dlm/dlm.ko; :; } | awk '!x[$$0]++' - > fs/dlm/modules.order
