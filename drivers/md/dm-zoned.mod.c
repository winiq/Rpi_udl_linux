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
	{ 0x3d774594, "fs_bio_set" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf0021cc4, "blkdev_report_zones" },
	{ 0xda458023, "submit_bio_wait" },
	{ 0x53b954a2, "up_read" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x910b6d7a, "blkdev_issue_flush" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xc73df17a, "bioset_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd1966eaa, "bio_advance" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0x346863cf, "dm_table_device_name" },
	{ 0xb19d56eb, "dm_kcopyd_copy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x745a981, "xa_erase" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfebb029d, "bio_clone_fast" },
	{ 0x6a6dbabd, "blkdev_issue_zeroout" },
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x696d325a, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x8fb4824a, "bioset_exit" },
	{ 0xa34a2ee2, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xc66ef1c7, "unregister_shrinker" },
	{ 0x4a08e256, "bdevname" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b25f6e4, "dm_accept_partial_bio" },
	{ 0x578243e2, "blkdev_zone_mgmt" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x47eadf1d, "register_shrinker" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0x892f1701, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe9fe0786, "blkdev_nr_zones" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x221524c0, "zero_fill_bio" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C3E2FE83FC3519D4C5738A");
