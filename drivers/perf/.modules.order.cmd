cmd_drivers/perf/modules.order := {   echo drivers/perf/raspberrypi_axi_monitor.ko; :; } | awk '!x[$$0]++' - > drivers/perf/modules.order
