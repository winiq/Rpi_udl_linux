cmd_sound/usb/line6/modules.order := {   echo sound/usb/line6/snd-usb-line6.ko;   echo sound/usb/line6/snd-usb-toneport.ko; :; } | awk '!x[$$0]++' - > sound/usb/line6/modules.order
