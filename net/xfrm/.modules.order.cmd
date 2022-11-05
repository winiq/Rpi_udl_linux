cmd_net/xfrm/modules.order := {   echo net/xfrm/xfrm_algo.ko;   echo net/xfrm/xfrm_user.ko;   echo net/xfrm/xfrm_ipcomp.ko; :; } | awk '!x[$$0]++' - > net/xfrm/modules.order
