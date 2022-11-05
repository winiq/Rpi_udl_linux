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
	{ 0x826655e4, "param_ops_int" },
	{ 0x367f90a1, "tcp_reno_undo_cwnd" },
	{ 0xca6f9a57, "tcp_unregister_congestion_control" },
	{ 0xa80aa4e1, "tcp_register_congestion_control" },
	{ 0x1aca15f9, "tcp_cong_avoid_ai" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3397e01f, "tcp_slow_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C845ADD634D10CD597B3A4");
