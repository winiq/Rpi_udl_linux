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
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x315a1023, "ip_vs_conn_in_get" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfd62d1be, "ip_vs_conn_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba19367a, "ip_vs_nfct_expect_related" },
	{ 0xfe277d69, "__nf_nat_mangle_tcp_packet" },
	{ 0x98cf60b3, "strlen" },
	{ 0x88000155, "ip_vs_conn_put" },
	{ 0x5b704920, "ip_vs_tcp_conn_listen" },
	{ 0x82f0e7a8, "ip_vs_conn_out_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x3cc01a63, "register_ip_vs_app_inc" },
	{ 0xc7be90d3, "register_ip_vs_app" },
	{ 0x35e9e235, "unregister_ip_vs_app" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "9C9835176D249C1D8579438");
