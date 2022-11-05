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
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xadcac529, "driver_unregister" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xcf1676a2, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0x6ac29623, "blk_rq_unmap_user" },
	{ 0xa6257a2f, "complete" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd338546e, "scsi_ioctl" },
	{ 0x799bdd31, "scsi_ioctl_block_when_processing_errors" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x6478bb5a, "unpin_user_pages_dirty_lock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2ae0ae15, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x390683f5, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1d1b6460, "blk_put_request" },
	{ 0x4ee02a64, "blk_execute_rq_nowait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd171c531, "blk_rq_map_user" },
	{ 0x89c70df0, "blk_get_request" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x57523764, "scsi_device_put" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x50b96c6, "scsi_autopm_put_device" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7232683f, "blk_queue_rq_timeout" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xbcdfc44, "scsi_autopm_get_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb932d2d8, "unpin_user_pages" },
	{ 0x3322c209, "flush_dcache_page" },
	{ 0x5206f811, "pin_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9387ea1d, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x5a2ffaf8, "scsi_set_medium_removal" },
	{ 0xa2423aa, "sdev_prefix_printk" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe38b0aff, "device_create" },
	{ 0xd394de53, "cdev_add" },
	{ 0x7e216075, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "337301B4671FC7758B14A3F");
