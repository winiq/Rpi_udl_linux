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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbea2d9ae, "securityfs_create_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c81c627, "cdev_init" },
	{ 0x6b3ae022, "acpi_os_unmap_iomem" },
	{ 0x53b954a2, "up_read" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x4b9ffe04, "seq_open" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2cf76f64, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xe9e8faeb, "efi_tpm_final_log_size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd19b5, "seq_read" },
	{ 0x61a7cde4, "securityfs_remove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x603d0d51, "acpi_os_map_iomem" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xce807a25, "up_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x190a48a9, "efi" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x81822a88, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8bc6bda8, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x617b026c, "hwrng_register" },
	{ 0xb22f8129, "of_get_property" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x4d924f20, "memremap" },
	{ 0xadc9aed4, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc0346142, "device_initialize" },
	{ 0xaea496ea, "securityfs_create_dir" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x96848186, "scnprintf" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xd323ee88, "cdev_device_del" },
	{ 0x634ed224, "compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5dd87fd0, "of_property_match_string" },
	{ 0xbd20dd1d, "seq_release" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbad97937, "__class_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A2FF8708C4210FBD7C5D82");
