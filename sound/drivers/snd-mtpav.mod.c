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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3256de71, "snd_devm_card_new" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x23efb323, "__devm_request_region" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x905c9800, "param_ops_long" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x6aabef6a, "snd_rawmidi_transmit" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");


MODULE_INFO(srcversion, "8ED392D10EF4512AB08C09D");
