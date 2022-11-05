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
	{ 0x5a2ffaf8, "scsi_set_medium_removal" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7232683f, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x7290d30d, "cdrom_number_of_slots" },
	{ 0x7aae3f98, "blkdev_compat_ptr_ioctl" },
	{ 0x1d1b6460, "blk_put_request" },
	{ 0x799bdd31, "scsi_ioctl_block_when_processing_errors" },
	{ 0x65b5e812, "unregister_cdrom" },
	{ 0xa375c767, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x78f197fe, "scsi_free_sgtables" },
	{ 0xf022fa39, "scmd_printk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfb80b229, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcdfc44, "scsi_autopm_get_device" },
	{ 0x9bd86f57, "scsi_alloc_sgtables" },
	{ 0x6ac29623, "blk_rq_unmap_user" },
	{ 0xe224f482, "__alloc_disk_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf805473e, "cdrom_release" },
	{ 0xbd07242f, "del_gendisk" },
	{ 0xf2d4fb9a, "__scsi_execute" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0xa2423aa, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xea487eae, "cdrom_get_media_event" },
	{ 0xc5ae97be, "set_capacity" },
	{ 0xc0db9d2b, "bdev_check_media_change" },
	{ 0xd171c531, "blk_rq_map_user" },
	{ 0xb4d8443e, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x6e01c058, "cdrom_get_last_written" },
	{ 0x57523764, "scsi_device_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb11fc3f7, "blk_execute_rq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd338546e, "scsi_ioctl" },
	{ 0x1525a6ec, "put_disk" },
	{ 0xcf1676a2, "scsi_register_driver" },
	{ 0x390683f5, "scsi_block_when_processing_errors" },
	{ 0x48db9c0e, "scsi_test_unit_ready" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xf97943a2, "cdrom_ioctl" },
	{ 0x3086c83b, "blk_pm_runtime_init" },
	{ 0xcb061ecd, "register_cdrom" },
	{ 0xda2629f1, "device_add_disk" },
	{ 0x2ae0ae15, "scsi_device_get" },
	{ 0x50b96c6, "scsi_autopm_put_device" },
	{ 0x4d481881, "blk_queue_logical_block_size" },
	{ 0x89c70df0, "blk_get_request" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x594b0bd5, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "045B1113EDA2681A39270F1");
