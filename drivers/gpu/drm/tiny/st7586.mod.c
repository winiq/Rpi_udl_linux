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
	{ 0x6488ca20, "drm_gem_cma_dumb_create" },
	{ 0xcd7668cb, "drm_gem_prime_mmap" },
	{ 0xc9b619af, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0xf61d7e9d, "drm_gem_prime_fd_to_handle" },
	{ 0x255c42d2, "drm_gem_prime_handle_to_fd" },
	{ 0x6ad1d1f, "mipi_dbi_debugfs_init" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xd92e68c5, "drm_fbdev_generic_setup" },
	{ 0x2174f648, "drm_dev_register" },
	{ 0xbbf4b2f0, "drm_mode_config_reset" },
	{ 0x112abb22, "mipi_dbi_dev_init_with_formats" },
	{ 0x73da90a3, "mipi_dbi_spi_init" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xa23e5f54, "__devm_drm_dev_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b00318, "mipi_dbi_poweron_reset" },
	{ 0xaa48f477, "drm_atomic_helper_damage_merged" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xad30cf99, "mipi_dbi_command_buf" },
	{ 0xc0929501, "drm_gem_fb_end_cpu_access" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ae669d0, "drm_fb_xrgb8888_to_gray8" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ceaa712, "drm_gem_fb_begin_cpu_access" },
	{ 0x3fe9e6c4, "drm_fb_cma_get_gem_obj" },
	{ 0xf82ae419, "drm_dev_enter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x67c676dc, "mipi_dbi_command_stackbuf" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x8a5df33e, "drm_dev_unplug" },
	{ 0x21066894, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm,drm_mipi_dbi,drm_kms_helper");

MODULE_ALIAS("spi:ev3-lcd");
MODULE_ALIAS("of:N*T*Clego,ev3-lcd");
MODULE_ALIAS("of:N*T*Clego,ev3-lcdC*");

MODULE_INFO(srcversion, "85070FAA1B5C6ED4B82F5D1");
