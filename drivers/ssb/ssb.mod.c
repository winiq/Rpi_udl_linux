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
	{ 0xed33f52c, "bus_register" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb1aeeef, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26a7300c, "driver_register" },
	{ 0x662a763e, "pci_write_config_word" },
	{ 0x980f9261, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd67d1d8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa5428265, "_dev_emerg" },
	{ 0xe5eb0c5b, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdcb764ad, "memset" },
	{ 0x7392091d, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x69424dee, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xadcac529, "driver_unregister" },
	{ 0xc6373c85, "pci_read_config_word" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6bd4433f, "pci_read_config_dword" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x498b0cbc, "pci_request_regions" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x85f39a5e, "pci_iomap" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x3c505ad4, "pci_enable_device" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E9EBAA3862F908DC36AB693");
