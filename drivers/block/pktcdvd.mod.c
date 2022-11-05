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
	{ 0x64522be7, "nonseekable_open" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x416e5db, "single_release" },
	{ 0xbd19b5, "seq_read" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x7aae3f98, "blkdev_compat_ptr_ioctl" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x8fb4824a, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x8b2b24a2, "proc_mkdir" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc73df17a, "bioset_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xb1415fd8, "bio_kmalloc" },
	{ 0x2ce77fae, "set_capacity_and_notify" },
	{ 0xc5ae97be, "set_capacity" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x4138ccd7, "bio_copy_data_iter" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d477c71, "clear_bdi_congested" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf33d52d1, "set_user_nice" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0x379e2513, "bio_reset" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbd07242f, "del_gendisk" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xca9360b5, "rb_next" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xf75756ec, "bio_devname" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0xfebb029d, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x6aca4581, "set_bdi_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc40508c1, "bio_chain" },
	{ 0xb219f8d9, "bio_split" },
	{ 0xc9df68ef, "blk_queue_split" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x696d325a, "bio_put" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x1d1b6460, "blk_put_request" },
	{ 0xb11fc3f7, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x762cf628, "blk_rq_map_kern" },
	{ 0x89c70df0, "blk_get_request" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x6587c97e, "module_put" },
	{ 0x8b45f45a, "proc_create_single_data" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x9728a8c4, "blk_queue_max_hw_sectors" },
	{ 0x4d481881, "blk_queue_logical_block_size" },
	{ 0xf4366c1c, "set_blocksize" },
	{ 0xdd981006, "__module_get" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0xe38b0aff, "device_create" },
	{ 0xda2629f1, "device_add_disk" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x23410413, "blk_cleanup_disk" },
	{ 0xcfb14cc8, "blkdev_put" },
	{ 0x667d1c3a, "blkdev_get_by_dev" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf4e3eca5, "__blk_alloc_disk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5dc00640, "single_open" },
	{ 0x741facb8, "kobject_put" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x84e68fa2, "kobject_init_and_add" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x4a08e256, "bdevname" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "29CA583ECE0946F6D344397");
