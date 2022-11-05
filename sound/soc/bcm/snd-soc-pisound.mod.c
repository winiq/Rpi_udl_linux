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
	{ 0x741facb8, "kobject_put" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x892b3647, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x73cc20f8, "kobject_create_and_add" },
	{ 0xaceaea2e, "snd_pcm_hw_constraint_mask64" },
	{ 0xdcb764ad, "memset" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x1a038d3f, "snd_rawmidi_transmit_peek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0x6c89bae3, "spi_bus_type" },
	{ 0xeb70268e, "snd_soc_unregister_card" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6182a04c, "bus_find_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0x8ef9a053, "snd_rawmidi_transmit_ack" },
	{ 0x919f8e3d, "gpiod_unexport" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0xe9790907, "kernel_kobj" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x25ce6759, "gpiod_export" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xa13a7a1e, "snd_pcm_hw_constraint_minmax" },
	{ 0xf2e17be0, "gpiod_get_index" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xa11501a6, "snd_soc_register_card" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xee45db28, "gpiod_put" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "B1A595C9C0585BE8E5246F6");
