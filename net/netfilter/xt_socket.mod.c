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
	{ 0xd6e7200f, "xt_unregister_matches" },
	{ 0x4c705db5, "xt_register_matches" },
	{ 0x728ff389, "nf_sk_lookup_slow_v4" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb12a0e60, "nf_defrag_ipv6_enable" },
	{ 0xb195b199, "nf_defrag_ipv4_enable" },
	{ 0xa77b30c8, "nf_defrag_ipv6_disable" },
	{ 0xa21a11b6, "nf_defrag_ipv4_disable" },
	{ 0x3fd79554, "sock_gen_put" },
	{ 0xf5e852e0, "nf_sk_lookup_slow_v6" },
};

MODULE_INFO(depends, "x_tables,nf_socket_ipv4,nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "CA044B9489DFE40B00FF330");
