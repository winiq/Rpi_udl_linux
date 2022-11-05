cmd_sound/usb/hiface/modules.order := {   echo sound/usb/hiface/snd-usb-hiface.ko; :; } | awk '!x[$$0]++' - > sound/usb/hiface/modules.order
