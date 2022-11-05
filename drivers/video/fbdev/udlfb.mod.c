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
	{ 0x826655e4, "param_ops_int" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xddfdbc26, "fb_sys_write" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7c55ef71, "device_create_bin_file" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xfc460a4b, "register_framebuffer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xff1ee9ed, "fb_sys_read" },
	{ 0xa9dc31a6, "framebuffer_alloc" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0x18601582, "usb_get_descriptor" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x175a92e9, "fb_deferred_io_init" },
	{ 0xfbc7ec2d, "fb_deferred_io_cleanup" },
	{ 0xdcb764ad, "memset" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x45b114d, "framebuffer_release" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xae90c37c, "sys_fillrect" },
	{ 0x354d4c75, "sys_copyarea" },
	{ 0xb1b62027, "sys_imageblit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x13696b51, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x7a289047, "unregister_framebuffer" },
	{ 0x49729afa, "device_remove_bin_file" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6626afca, "down" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xcf2a6966, "up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "842089FE9449EAF10DCA343");
