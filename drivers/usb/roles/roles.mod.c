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
	{ 0xdd0d3a1f, "class_find_device" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x93681f59, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x7392091d, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6587c97e, "module_put" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x978ca647, "device_match_fwnode" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x94dd6322, "fwnode_get_parent" },
	{ 0x2327841c, "fwnode_connection_find_match" },
	{ 0x37a0cba, "kfree" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xbad97937, "__class_create" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "14B8C5358A65995853D688E");
