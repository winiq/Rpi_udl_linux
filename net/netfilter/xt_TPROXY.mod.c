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
	{ 0x43bcd2f6, "xt_unregister_targets" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0x91c42b78, "nf_tproxy_handle_time_wait4" },
	{ 0x1018ad05, "nf_tproxy_laddr4" },
	{ 0xd1b559a3, "nf_tproxy_get_sock_v4" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb88466aa, "nf_tproxy_handle_time_wait6" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x5735db0, "sock_edemux" },
	{ 0x3fd79554, "sock_gen_put" },
	{ 0x6ce2f2a, "nf_tproxy_laddr6" },
	{ 0xd1212125, "nf_tproxy_get_sock_v6" },
	{ 0xa7a116d3, "ipv6_find_hdr" },
	{ 0xb195b199, "nf_defrag_ipv4_enable" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb12a0e60, "nf_defrag_ipv6_enable" },
	{ 0xa21a11b6, "nf_defrag_ipv4_disable" },
	{ 0xa77b30c8, "nf_defrag_ipv6_disable" },
};

MODULE_INFO(depends, "x_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "33F387C72D0CD6BB15ABF43");
