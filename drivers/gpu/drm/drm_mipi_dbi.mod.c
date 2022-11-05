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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5dc00640, "single_open" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x263b9f14, "drm_atomic_helper_connector_reset" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x416e5db, "single_release" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd4983d85, "drm_fb_swab" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x2ceaa712, "drm_gem_fb_begin_cpu_access" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x838a8fa0, "drm_fb_memcpy" },
	{ 0xbd19b5, "seq_read" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0xd651913f, "drm_connector_cleanup" },
	{ 0x3563484e, "drm_simple_display_pipe_init" },
	{ 0x7e80de26, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0xca33309e, "drm_gem_fb_get_obj" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5f7b2709, "drm_gem_fb_create_with_dirty" },
	{ 0xaa48f477, "drm_atomic_helper_damage_merged" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf5b693f6, "drm_connector_init" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x942f0ee9, "drm_dev_printk" },
	{ 0x6a725913, "drm_atomic_helper_connector_destroy_state" },
	{ 0xe1340cb3, "drm_atomic_helper_check" },
	{ 0x5fb6e8cb, "drm_atomic_helper_commit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe4129903, "drmm_mode_config_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x99285c03, "drm_plane_enable_fb_damage_clips" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xf82ae419, "drm_dev_enter" },
	{ 0xc0929501, "drm_gem_fb_end_cpu_access" },
	{ 0x4e41ad5c, "drm_fb_xrgb8888_to_rgb565" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");


MODULE_INFO(srcversion, "7391D9F9B7FA2F2C457A004");
