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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xc5933243, "input_free_device" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1A4FEE5178C8F348C403F42");
