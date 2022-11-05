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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x340c265, "gpiochip_remove" },
	{ 0xc2937d7c, "gpiochip_add_data_with_key" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xffde228, "gpiochip_get_data" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F8A963975934FD94E3EE462");
