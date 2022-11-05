cmd_fs/udf/modules.order := {   echo fs/udf/udf.ko; :; } | awk '!x[$$0]++' - > fs/udf/modules.order
