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
	{ 0x3927bac2, "mipi_dbi_pipe_update" },
	{ 0x239aa584, "mipi_dbi_pipe_disable" },
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
	{ 0xcffb31f7, "mipi_dbi_dev_init" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x73da90a3, "mipi_dbi_spi_init" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc213b544, "devm_of_find_backlight" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0xf8a40c0, "of_get_drm_panel_display_mode" },
	{ 0xa23e5f54, "__devm_drm_dev_alloc" },
	{ 0x96748047, "devm_kmemdup" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed2e8dd8, "of_property_read_string_helper" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x67c676dc, "mipi_dbi_command_stackbuf" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xc6c8923, "mipi_dbi_enable_flush" },
	{ 0x264821b0, "mipi_dbi_poweron_conditional_reset" },
	{ 0xdddb2fc2, "drm_dev_dbg" },
	{ 0xf82ae419, "drm_dev_enter" },
	{ 0x8a5df33e, "drm_dev_unplug" },
	{ 0x21066894, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm,drm_mipi_dbi,drm_kms_helper,backlight");

MODULE_ALIAS("spi:panel-mipi-dbi-spi");
MODULE_ALIAS("of:N*T*Cpanel-mipi-dbi-spi");
MODULE_ALIAS("of:N*T*Cpanel-mipi-dbi-spiC*");

MODULE_INFO(srcversion, "6E1DC936A9E95C5741E13DA");
