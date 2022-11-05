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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xd258a1fa, "usbatm_usb_disconnect" },
	{ 0x79996a06, "param_ops_byte" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0xc6e96ea0, "atm_dev_signal_change" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xdcbcc479, "usb_string" },
	{ 0x92997ed8, "_printk" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x93d03a43, "usbatm_usb_probe" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "33CD7E92BE9C5670004633E");
