cmd_drivers/media/dvb-frontends/stid135/modules.order := {   echo drivers/media/dvb-frontends/stid135/stid135.ko; :; } | awk '!x[$$0]++' - > drivers/media/dvb-frontends/stid135/modules.order
