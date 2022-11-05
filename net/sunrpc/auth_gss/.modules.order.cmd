cmd_net/sunrpc/auth_gss/modules.order := {   echo net/sunrpc/auth_gss/rpcsec_gss_krb5.ko; :; } | awk '!x[$$0]++' - > net/sunrpc/auth_gss/modules.order
