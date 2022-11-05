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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x5dc00640, "single_open" },
	{ 0x8b45f45a, "proc_create_single_data" },
	{ 0x3692fcea, "nvmem_register" },
	{ 0x416e5db, "single_release" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x91240be3, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9fc9c84, "sysfs_create_files" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x2bce416, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6994a440, "__register_chrdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f0bd73a, "of_device_is_compatible" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xbd19b5, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7392091d, "device_register" },
	{ 0xba9683cd, "bdi_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x10fe0392, "fixed_size_llseek" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe38b0aff, "device_create" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc9ab4d04, "of_prop_next_string" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x6587c97e, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3e8a2b13, "bdi_put" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdd981006, "__module_get" },
	{ 0xa1e82396, "sysfs_remove_files" },
	{ 0x5c7565d3, "logfc" },
	{ 0xf2b157ac, "of_node_get" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x49a1a14, "sget_fc" },
	{ 0xcc39c03e, "nvmem_unregister" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x1b44e66d, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbf204c48, "of_get_compatible_child" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x70821e7b, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8036F37F9432E041AE6288F");
