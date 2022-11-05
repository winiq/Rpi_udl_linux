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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0xd1ad6d8d, "raid5_set_cache_size" },
	{ 0x9d2dee5b, "r5c_journal_mode_set" },
	{ 0x84ab49a9, "md_start" },
	{ 0xf0f4e0cb, "md_run" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x593887b0, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x1aeba323, "dm_set_target_max_io_len" },
	{ 0x84a613ed, "md_rdev_init" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x96848186, "scnprintf" },
	{ 0x33164f54, "md_wakeup_thread" },
	{ 0xaf03666a, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2991f416, "md_bitmap_resize" },
	{ 0x88b115ac, "md_update_sb" },
	{ 0x7054ef8, "md_bitmap_load" },
	{ 0x9715ca3e, "mddev_resume" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x167aa36d, "md_stop_writes" },
	{ 0xec16ebfd, "mddev_unlock" },
	{ 0x9431d5f, "mddev_suspend" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x62261fd9, "md_error" },
	{ 0x24409824, "sync_page_io" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x35a6ab55, "dm_table_event" },
	{ 0x455d1530, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0x3dc4da06, "md_rdev_clear" },
	{ 0xad7dbd89, "md_handle_request" },
	{ 0x2ce77fae, "set_capacity_and_notify" },
	{ 0xe5a10d36, "dm_disk" },
	{ 0x691406c7, "dm_table_get_md" },
	{ 0x92997ed8, "_printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0xd2779731, "blk_limits_io_min" },
};

MODULE_INFO(depends, "raid456,md-mod");


MODULE_INFO(srcversion, "4A24D35D59832659CB3F443");
