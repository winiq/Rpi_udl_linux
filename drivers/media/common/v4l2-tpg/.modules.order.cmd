cmd_drivers/media/common/v4l2-tpg/modules.order := {   echo drivers/media/common/v4l2-tpg/v4l2-tpg.ko; :; } | awk '!x[$$0]++' - > drivers/media/common/v4l2-tpg/modules.order
