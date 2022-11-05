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
	{ 0xd7f17230, "__blk_mq_end_request" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x50dabc2f, "mtd_table_mutex" },
	{ 0x23410413, "blk_cleanup_disk" },
	{ 0xc32e97a2, "rq_flush_dcache_pages" },
	{ 0x64089885, "blk_mq_start_request" },
	{ 0x712f7bf, "blk_mq_unfreeze_queue" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8c6bb4a6, "__put_mtd_device" },
	{ 0x1b6cebdd, "blk_mq_freeze_queue" },
	{ 0x148e68c7, "__get_mtd_device" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x5d785f24, "blk_queue_max_discard_sectors" },
	{ 0xbd07242f, "del_gendisk" },
	{ 0x91b0fd95, "blk_mq_free_tag_set" },
	{ 0x1bb2ce7a, "register_mtd_user" },
	{ 0x8f16ee14, "__mtd_next_device" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc5ae97be, "set_capacity" },
	{ 0x15fe8997, "unregister_mtd_user" },
	{ 0x7684b6e0, "blk_update_request" },
	{ 0x54e95b5c, "blk_mq_alloc_sq_tag_set" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xebb4769e, "blk_queue_flag_clear" },
	{ 0x6587c97e, "module_put" },
	{ 0xb57c95c7, "blk_queue_flag_set" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xaf2be8eb, "__blk_mq_alloc_disk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdd981006, "__module_get" },
	{ 0x96b3b53e, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xe87562dc, "blk_mq_quiesce_queue" },
	{ 0x4bd51cb4, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xda2629f1, "device_add_disk" },
	{ 0x4d481881, "blk_queue_logical_block_size" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4ed7dfd2, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "D06AE7E2CF04C1214EE553B");
