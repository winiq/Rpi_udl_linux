cmd_drivers/net/ethernet/broadcom/modules.order := {   cat drivers/net/ethernet/broadcom/genet/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/broadcom/modules.order
