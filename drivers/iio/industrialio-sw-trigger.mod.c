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
	{ 0x73411781, "configfs_register_default_group" },
	{ 0x264e3e87, "iio_configfs_subsys" },
	{ 0xbf3a8ac9, "config_item_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6587c97e, "module_put" },
	{ 0x65da01c7, "config_item_set_name" },
	{ 0x92997ed8, "_printk" },
	{ 0xec647565, "configfs_unregister_default_group" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "industrialio-configfs");


MODULE_INFO(srcversion, "5B30579AB405231D416C72D");
