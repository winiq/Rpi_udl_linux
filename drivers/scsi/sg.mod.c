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
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6eb3527a, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x265fe5e, "class_destroy" },
	{ 0x6b88aa1, "scsi_register_interface" },
	{ 0xbad97937, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x4cd0d64, "blk_trace_startstop" },
	{ 0x1cc9e3dc, "blk_trace_setup" },
	{ 0x799bdd31, "scsi_ioctl_block_when_processing_errors" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xd338546e, "scsi_ioctl" },
	{ 0x1852a74b, "blk_trace_remove" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xc1d5d504, "scsi_cmd_allowed" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0xdd981006, "__module_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x390683f5, "scsi_block_when_processing_errors" },
	{ 0xbcdfc44, "scsi_autopm_get_device" },
	{ 0x2ae0ae15, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x64522be7, "nonseekable_open" },
	{ 0x2bce416, "device_destroy" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0x9734ca80, "blk_rq_map_user_iov" },
	{ 0x7a4f2ce5, "import_iovec" },
	{ 0x4ee02a64, "blk_execute_rq_nowait" },
	{ 0xd171c531, "blk_rq_map_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0x89c70df0, "blk_get_request" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9387ea1d, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0x6587c97e, "module_put" },
	{ 0x57523764, "scsi_device_put" },
	{ 0x50b96c6, "scsi_autopm_put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56ec2ec, "__task_pid_nr_ns" },
	{ 0x1d1b6460, "blk_put_request" },
	{ 0x6ac29623, "blk_rq_unmap_user" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2423aa, "sdev_prefix_printk" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0xe38b0aff, "device_create" },
	{ 0xd394de53, "cdev_add" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7e216075, "cdev_alloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3ADD431E649BB09777D669C");
