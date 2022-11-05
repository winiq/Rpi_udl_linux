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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x55487139, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x8a43b821, "dvb_dmx_init" },
	{ 0xd033feb5, "dvb_unregister_adapter" },
	{ 0xccba9f4f, "dvb_create_media_graph" },
	{ 0xdb80b15, "dvb_register_frontend" },
	{ 0x5ce2c58c, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xcfb0e87b, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0xbbf919c8, "dvb_net_release" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0x55601ffa, "dvb_frontend_detach" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x186988e3, "dvb_dmx_swfilter_raw" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0x715823a3, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9676dc28, "dvb_dmx_swfilter" },
	{ 0xeb18274b, "dvb_net_init" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xf9e60eda, "dvb_dmx_release" },
	{ 0xeee053da, "dvb_dmx_swfilter_204" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0xe37d4b98, "i2c_del_adapter" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5933243, "input_free_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x1d050927, "dvb_register_adapter" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xb0badc5a, "dvb_dmxdev_init" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "BA6E1B5E311EFA7F54BBD77");
