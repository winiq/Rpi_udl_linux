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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x2174f648, "drm_dev_register" },
	{ 0x34760d05, "drm_compat_ioctl" },
	{ 0xacfecb90, "drm_mode_config_helper_resume" },
	{ 0xbbf4b2f0, "drm_mode_config_reset" },
	{ 0x263b9f14, "drm_atomic_helper_connector_reset" },
	{ 0x3ca4afb4, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0x63328b8a, "drm_gem_prime_import_dev" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2ceaa712, "drm_gem_fb_begin_cpu_access" },
	{ 0x4380d52e, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0xd651913f, "drm_connector_cleanup" },
	{ 0xacf1e92e, "drm_do_get_edid" },
	{ 0x3563484e, "drm_simple_display_pipe_init" },
	{ 0x7e80de26, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x18601582, "usb_get_descriptor" },
	{ 0xd92e68c5, "drm_fbdev_generic_setup" },
	{ 0x104c60b0, "drm_connector_update_edid_property" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x85428465, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xa23e5f54, "__devm_drm_dev_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5f7b2709, "drm_gem_fb_create_with_dirty" },
	{ 0x6626afca, "down" },
	{ 0xf1dfd000, "drm_read" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xee7d5ac2, "drm_gem_simple_kms_prepare_shadow_fb" },
	{ 0xaa48f477, "drm_atomic_helper_damage_merged" },
	{ 0xba5a062, "drm_add_edid_modes" },
	{ 0xc1e0d921, "usb_intf_get_dma_device" },
	{ 0x2255a7, "drm_mode_config_helper_suspend" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xf5b693f6, "drm_connector_init" },
	{ 0x8a5df33e, "drm_dev_unplug" },
	{ 0xf9b963aa, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0xf61d7e9d, "drm_gem_prime_fd_to_handle" },
	{ 0x90ce3c67, "drm_ioctl" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x70c46013, "drm_gem_mmap" },
	{ 0x6a725913, "drm_atomic_helper_connector_destroy_state" },
	{ 0xe1340cb3, "drm_atomic_helper_check" },
	{ 0x81822a88, "put_device" },
	{ 0x5fb6e8cb, "drm_atomic_helper_commit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe4129903, "drmm_mode_config_init" },
	{ 0x255c42d2, "drm_gem_prime_handle_to_fd" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc702bc87, "drm_gem_simple_kms_cleanup_shadow_fb" },
	{ 0xcf2a6966, "up" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xcd7668cb, "drm_gem_prime_mmap" },
	{ 0x421470fc, "drm_gem_shmem_dumb_create" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0xc3834c15, "drm_kms_helper_poll_init" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xc0929501, "drm_gem_fb_end_cpu_access" },
	{ 0xcf999106, "drm_poll" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xef2b6d3f, "drm_open" },
	{ 0xd3decf3b, "drm_kms_helper_poll_fini" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "FB9A98C4B7F7EB533A6A7D0");
