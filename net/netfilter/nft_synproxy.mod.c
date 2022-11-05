#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0x4f7f5e63, "nft_unregister_obj" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x6c519fff, "nft_register_obj" },
	{ 0xd559a4d7, "synproxy_send_client_synack_ipv6" },
	{ 0x290c2d20, "synproxy_send_client_synack" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x7c865f3c, "synproxy_recv_client_ack" },
	{ 0x7a09011b, "synproxy_recv_client_ack_ipv6" },
	{ 0xefbae751, "synproxy_parse_options" },
	{ 0x8d39172e, "nf_ip_checksum" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9914abe7, "nf_synproxy_ipv6_init" },
	{ 0x944c6a3d, "nf_synproxy_ipv4_init" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0x2a42062c, "nf_synproxy_ipv6_fini" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x271ac7f6, "nf_synproxy_ipv4_fini" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "3E1B709D662C59B2851ACB1");
