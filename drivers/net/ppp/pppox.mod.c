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
	{ 0xcdeede81, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd3f8da99, "ppp_unregister_channel" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0x6587c97e, "module_put" },
	{ 0xcb456a92, "sock_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x3b30bbb8, "ppp_channel_index" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
