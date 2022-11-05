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
	{ 0x265fe5e, "class_destroy" },
	{ 0x2bce416, "device_destroy" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0xe38b0aff, "device_create" },
	{ 0xbad97937, "__class_create" },
	{ 0xf64aaa25, "alarm_init" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd383e102, "sysfs_create_file_ns" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9a23ea6b, "alarm_expires_remaining" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5b0600d, "sysfs_notify" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9621d738, "alarm_start_relative" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0xfdea2d04, "alarm_cancel" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x38bd64a0, "sysfs_remove_file_ns" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "263C112227237243CBEA9A5");
