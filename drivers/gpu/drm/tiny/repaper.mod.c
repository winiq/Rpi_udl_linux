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
	{ 0x478adb45, "drm_release" },
	{ 0xef2b6d3f, "drm_open" },
	{ 0x70c46013, "drm_gem_mmap" },
	{ 0x34760d05, "drm_compat_ioctl" },
	{ 0x90ce3c67, "drm_ioctl" },
	{ 0xcf999106, "drm_poll" },
	{ 0xf1dfd000, "drm_read" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x6a725913, "drm_atomic_helper_connector_destroy_state" },
	{ 0x7e80de26, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd651913f, "drm_connector_cleanup" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0x263b9f14, "drm_atomic_helper_connector_reset" },
	{ 0x5fb6e8cb, "drm_atomic_helper_commit" },
	{ 0xe1340cb3, "drm_atomic_helper_check" },
	{ 0x5f7b2709, "drm_gem_fb_create_with_dirty" },
	{ 0x6488ca20, "drm_gem_cma_dumb_create" },
	{ 0xcd7668cb, "drm_gem_prime_mmap" },
	{ 0xc9b619af, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0xf61d7e9d, "drm_gem_prime_fd_to_handle" },
	{ 0x255c42d2, "drm_gem_prime_handle_to_fd" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xc0929501, "drm_gem_fb_end_cpu_access" },
	{ 0x7ae669d0, "drm_fb_xrgb8888_to_gray8" },
	{ 0x2ceaa712, "drm_gem_fb_begin_cpu_access" },
	{ 0x892e8df6, "thermal_zone_get_temp" },
	{ 0x3fe9e6c4, "drm_fb_cma_get_gem_obj" },
	{ 0xaa48f477, "drm_atomic_helper_damage_merged" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf82ae419, "drm_dev_enter" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0x942f0ee9, "drm_dev_printk" },
	{ 0x3e1d8ed4, "thermal_zone_get_zone_by_name" },
	{ 0xd92e68c5, "drm_fbdev_generic_setup" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x2174f648, "drm_dev_register" },
	{ 0xbbf4b2f0, "drm_mode_config_reset" },
	{ 0x3563484e, "drm_simple_display_pipe_init" },
	{ 0xf5b693f6, "drm_connector_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x63fff561, "device_property_read_string" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xe4129903, "drmm_mode_config_init" },
	{ 0xa23e5f54, "__devm_drm_dev_alloc" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x95069563, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x6069016c, "drm_mode_duplicate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xdcb764ad, "memset" },
	{ 0x8a5df33e, "drm_dev_unplug" },
	{ 0x21066894, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "9373D706F735FF3A32CE696");
