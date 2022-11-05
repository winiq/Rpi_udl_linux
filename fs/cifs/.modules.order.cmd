cmd_fs/cifs/modules.order := {   echo fs/cifs/cifs.ko; :; } | awk '!x[$$0]++' - > fs/cifs/modules.order
